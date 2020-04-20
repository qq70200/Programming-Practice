#include <iostream>
using namespace std;

/* structure with a stupid point */
struct point{
	int x;
	int y;
}; 

/* set the first direction of my stupid robot*/
void my_dir(int &d,char w)
{
	switch(w)
	{
		case 'N':
			d = 0;
			break;
		case 'E':
			d = 1;
			break;
		case 'S':
			d = 2;
			break;
		case 'W':
			d = 3;
			break;
	}
}

/* let the stupid robot go ahead */
void robot_go(point &pos,int d)
{
	switch(d)
	{
		case 0:	//N
			pos.y++;
			break;
		case 1:
			pos.x++;
			break;
		case 2:
			pos.y--;
			break; 
		case 3:
			pos.x--;
			break;
	}
}

/* the stupid robot will fall back and it is still stupid */
void robot_fall_back(point &pos,int d)
{
	switch(d)
	{
		case 0:	//N
			pos.y--;
			break;
		case 1:
			pos.x--;
			break;
		case 2:
			pos.y++;
			break; 
		case 3:
			pos.x++;
			break;
	}
}

/* output my direction */
void output_dir(int d)
{
	switch(d)
	{
		case 0:	//N
			cout<<"N";
			break;
		case 1:
			cout<<"E";
			break;
		case 2:
			cout<<"S";
			break; 
		case 3:
			cout<<"W";
			break;
	}
}

int main()
{
	point rec,pos;
	point *lost = new point[1001]; // this is used to store the position where the stupid robot losts 
	/* assign first coord to (-1,-1) to avoid some troubles */
	lost[0].x = -1;
	lost[0].y = -1;
	char word;
	char *move = new char[101];
	int dir;// N E S W = {0, 1, 2, 3}
	int robot_lost_num=0; // the stupid robots lost in the echo
	bool notLost,isLost;
	
	cin>>rec.x>>rec.y;
	while(cin>>pos.x>>pos.y>>word)
	{
		/* priority is notLost>isLost if both are true */
		isLost = false;
		
		/* set first direction */
		my_dir(dir,word);
		
		cin>>move;
		for(int i=0;move[i];i++)
		{
			notLost = false;
			
			switch(move[i])
			{
				case 'R':
					dir++;
					dir%=4;
					break;
					
				case 'L':
					dir--;
					if(dir<0) dir=3;
					break;
					
				case 'F':
					robot_go(pos,dir);
					
					/* check whether the robot is lost or not */
					if(pos.x>rec.x||pos.y>rec.y||pos.x<0||pos.y<0)
					{
						point compare = pos;
						robot_fall_back(compare,dir);
						
						for(int i=0;i<=robot_lost_num;i++)
						{
							/* the stupid robot is saved */
							if(lost[i].x==compare.x && lost[i].y==compare.y)
							{
								robot_fall_back(pos,dir);
								notLost = true;
								break;
							}
						}
						
						if(notLost) break; // if it is saved, we can ignore the currently move
										   // and break this switch case
						
						/* the stupid robot is lost right now */	
						isLost = true;
						point tmp = pos;
						robot_fall_back(tmp,dir);
						lost[robot_lost_num] = tmp;
						robot_lost_num++;
					}
					break;
			}
		}//end for all moves
		
		cout<<pos.x<<" "<<pos.y<<" ";
		output_dir(dir);
		if(isLost) cout<<" LOST";
		cout<<endl;
	}
	delete [] lost;
	delete [] move;
	return 0;
}
