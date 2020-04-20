#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <queue>
using namespace std;

struct point{
	int x,y,z;
	int value;
	point(int x,int y,int z,int v):
		x(x),y(y),z(z),value(v) {}
};

char map[30][30][30];
point start_pt(0,0,0,0);

void create_dungeon(int layer, int row, int col)
{
	for(int i=0;i<layer;i++)
	{
		for(int j=0;j<row;j++)
		{
			for(int k=0;k<col;k++)
			{
				cin>>map[i][j][k];
				
				if(map[i][j][k]=='S')
				{
					start_pt.x = i;
					start_pt.y = j;
					start_pt.z = k;
					start_pt.value = 0;
					map[i][j][k] = '.';
				}
			}
		}
		getchar();
	}//end layer
}

int BFS(point current_pt,int l, int r, int c)
{
	queue<point> myqueue;
	myqueue.push(current_pt);
	
	while(!myqueue.empty())
	{
		point p = myqueue.front();
		
		if(p.x<0||p.y<0||p.z<0||
		   p.x>=l||p.y>=r||p.z>=c)
		{
			myqueue.pop();
			continue;
		}
		
		if(map[p.x][p.y][p.z]=='E')	return p.value;
		
		if(map[p.x][p.y][p.z]!='.')
		{
			myqueue.pop();
			continue;
		}
		
		map[p.x][p.y][p.z] = '#';
		
		myqueue.push(point(p.x+1,p.y,p.z,p.value+1));
		myqueue.push(point(p.x-1,p.y,p.z,p.value+1));
		myqueue.push(point(p.x,p.y+1,p.z,p.value+1));
		myqueue.push(point(p.x,p.y-1,p.z,p.value+1));
		myqueue.push(point(p.x,p.y,p.z+1,p.value+1));
		myqueue.push(point(p.x,p.y,p.z-1,p.value+1));
		
		myqueue.pop();
	}
	return -1;
}

int main()
{
	int layer,row,col;
	
	while(cin>>layer>>row>>col)
	{
		if(layer==0 && row==0 && col==0) break;
		
		memset(map,'0',sizeof(map));
		
		create_dungeon(layer,row,col);
		
		int movement = BFS(start_pt,layer,row,col);
		
		if(movement<0) cout<<"Trapped!\n";
		else cout<<"Escaped in "<<movement<<" minute(s).\n";
	}
	return 0;
}
