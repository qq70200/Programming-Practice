#include <iostream>
using namespace std;

/***
**	interface
***/
class QuackBehavior{
	public:
		virtual void Quack(){
			cout<<"呱呱呱"<<endl;
		}
};

class FlyBehavior{
	public:
		virtual void Fly(){
			cout<<"我在飛"<<endl;
		}
};

// QuackBehavior
class NormalQuack : public QuackBehavior{
	public:
		void Quack(){
			cout<<"呱呱呱"<<endl; 
		}
};

class MuteQuack : public QuackBehavior{
	public:
		void Quack(){
			cout<<"(安靜)"<<endl; 
		}
};

class LoudQuack : public QuackBehavior{
	public:
		void Quack(){
			cout<<"吼嘎嘎嘎嘎嘎"<<endl;
		}
};
// QuackBehavior

// FlyBehavior
class ICanFly : public FlyBehavior{
	public:
		void Fly(){
			cout<<"我在飛"<<endl;
		}
};

class NotFly : public FlyBehavior{
	public:
		void Fly(){
			cout<<"我不會飛"<<endl;
		}
};
// FlyBehavior



/***
**	object
***/
class Duck{
	protected:
		QuackBehavior *quack_behavior;
		FlyBehavior *fly_behavior;
		
	public:
		Duck(QuackBehavior *, FlyBehavior *);
		void performQuack(){
			quack_behavior -> Quack();
		}	
		void performFly(){
			fly_behavior -> Fly();
		}
		void setQuack(QuackBehavior *temp_quack){
			quack_behavior = temp_quack;
		}
		void setFly(FlyBehavior *temp_fly){
			fly_behavior = temp_fly;
		}
};
Duck::Duck(QuackBehavior *q, FlyBehavior *f){
	quack_behavior = q;
	fly_behavior = f;
}

class GreenDuck : public Duck{
	public:
		GreenDuck(QuackBehavior *q, FlyBehavior *f):Duck(q,f){}
};

class ToyDuck : public Duck{
	public:
		ToyDuck(QuackBehavior *q, FlyBehavior *f):Duck(q,f){}
};



/***
**	main
***/
int main()
{
	QuackBehavior *quack = new NormalQuack();
	QuackBehavior *mute = new MuteQuack();
	QuackBehavior *loud = new LoudQuack();
	FlyBehavior *fly = new ICanFly();
	FlyBehavior *notfly = new NotFly();
	
	Duck myDuck(quack,fly);
	GreenDuck green(loud,fly);
	ToyDuck toy(mute,notfly);
	
	cout<<"myDuck: "<<endl;
	myDuck.performQuack();
	myDuck.performFly();
	
	cout<<"GreenDuck: "<<endl;
	green.performQuack();
	green.performFly();
	
	cout<<"ToyDuck: "<<endl;
	toy.performQuack();
	toy.performFly();
	
	/*myDuck.setFly(notfly);
	myDuck.performFly();*/
	
	delete mute;
	delete loud;
	delete fly;
	delete notfly;
	
	return 0;
}
