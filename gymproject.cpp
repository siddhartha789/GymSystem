#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <fstream>
#include <ctime>

using namespace std;

void mainmenu();//function declaration which is called from the main()
int choice,fee,D,M,Y;
bool cinfail; //global variables are declared
long long int confirmation, age, contactNo;
string name, gender, password, password2,mov;
class diet //class declaration
{
	public:
		int dd;
		char ch;
		void get_diet()
    {
		    time_t t = time(0);   // get time now
        struct tm *now = localtime( & t );
       dd=(now->tm_wday);//get todays date
        cout<<"Enter if you are a Vegetarian or a Non-Vegetarian"<<endl;
		cin>>ch;
		if(ch=='v' || ch=='V')
		{
		cout<<"VEGETARIAN"<<endl;
		switch(dd)
		{
			case 0:{ cout<<"SUNDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\nTop oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
			       }
            case 1:{ cout<<"MONDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 2:{ cout<<"TUESDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 3:{ cout<<"WEDNESDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 4:{ cout<<"THURSDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 5:{ cout<<"FRIDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 6:{ cout<<"SATURDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Empty Stomach:Honey+Lemon in hot water\nBreakfast (297 calories) \nOatmeal with Fruit & Nuts\n 1/2 cup oatmeal cooked in 1/2 cup skim milk and 1/2 cup water\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (337 calories) \nGreen salad with Spiced Chickpea Nuts\n 2 cups mixed greens\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n Combine ingredients and top with 1 Tbsp. each olive oil & balsamic vinegar\n";
					 cout<<"Dinner (431 calories) \n 1 serving Mozzarella, Basil & Zucchini Frittata\n 1 cup mixed greens\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
		}
		}
		else if(ch=='n' || ch=='N')
		{
		cout<<"NON VEGETARIAN"<<endl;
		switch(dd)
		{
			case 0:{ cout<<"SUNDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
			       }
            case 1:{ cout<<"MONDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
                     break;
                   }
            case 2:{ cout<<"TUESDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
                   }
            case 3:{ cout<<"WEDNESDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
                   }
            case 4:{ cout<<"THURSDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
                   }
            case 5:{ cout<<"FRIDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
                   }
            case 6:{ cout<<"SATURDAY"<<endl<<"YOUR DIET FOR TODAY IS:"<<endl;
				     cout<<"Breakfast (400 calories) \n1 glass whey protein\n 3 boiled eggs\n 1/2 medium apple, diced\n 1 Tbsp. chopped walnuts\n Top oatmeal with apple, walnuts and a pinch of cinnamon\n.";
					 cout<<"Lunch (200 calories) \nGreen salad with Spiced Chickpea Nuts\n 100g smoked salmon with spinach\n 5 cherry tomatoes, halved\n 1/2 cup cucumber slices\n Chickpea Nut\n 1 Tbsp. feta cheese\n1 bowl yoghurt with fruits\n";
					 cout<<"Dinner (600 calories) \n200g grilled fish\n brown rice\n Top salad with 1/2 Tbsp. each olive oil & balsamic vinegar.\n 2 diagonal slices baguette (1/4 inch thick), preferably whole-wheat, toasted \n";
					 break;
                   }
		}
    }
  }
};
class schedule;//class declaration
class workouts
{
    int option;
public:
friend class schedule;//schedule class is made friend of the workouts class
     void subscription()//subscription function defined here
    {


        int option;

        cout<<"Please select your subscription\n[1] One month=800Rs\n[2] Three months=2200Rs\n[3] Six months=4000Rs\n[4] Twelve months=7000Rs"<<endl;
        //return to this point if input is valid
        here:
         cin.clear();
        cin.ignore(10000,'\n');
        cin>>option;
            switch(option)
            {
                case 1:
                        {
                        fee=800;
                        break;
                        }
                case 2:
                        {
                            fee=2200;
                            break;
                        }
                case 3:
                        {
                            fee=4000;
                            break;
                        }
                case 4:
                        {
                            fee=7000;
                            break;
                        }
            default:
            {
                cout<<"INVALID INPUT"<<endl;
                cout<<"Please choose a valid option"<<endl;
                goto here;
                break;
            }
        }
            /*special discount for senior citizens*/
        if(age>45 && (gender=="Male" || gender=="male" || gender=="M" || gender=="m" || gender=="MALE"))
            {
			fee-=0.20*fee;
			cout<<"Taking into consideration your age and dedication we provide you with an additional discount of 20%\n";
			}
        else if(age>45 && (gender=="Female" || gender=="female" || gender=="F" || gender=="f" || gender=="FEMALE"))
            {
			fee-=.25*fee;
			cout<<"Taking into consideration your age and dedication we provide you with an additional discount of 25%\n";
			}

    }
   void ab_workouts()
    {
        cout<<"Following is the list of some Ab workouts :"<<endl;
        cout<<"1. SPIDERMAN PLANK CRUNCH\n2. CABLE ROTATION\n3. BICYCLE CRUNCH\n4. CROSS CRUNCH\n5. SWISS-BALL ROLLOUT"<<endl;

    }
   void Biceps_building()
   {
       cout<<"Following is the list of some Biceps Building workouts :"<<endl;
       cout<<"1. INCLINE HAMMER CURLS\n2. INCLINE INNER-BICEPS CURL\n3. STANDING CONCENTRATION CURL\n4. BARBELL CURL\n5. DUMBBELL BICEPS CURL\n6. HAMMER CURL"<<endl;

   }
   void fat_loss()
   {
   		cout<<"Following is the list of some Fat Loss workouts :"<<endl;
   		cout<<"1. ELBOW PLANK\n2. CRUNCHES\n3. HYPEREXTENSIONS\n4. ROPE JUMPING\n5. BODYWEIGHT SQUAT\n6. SIT UP\n";

   }
   void Muscle_Building()
   {
   		cout<<"Following is the list of some Muscle Building loss workouts :"<<endl;
   		cout<<"1. BARBELL SQUAT\n2. BARBELL BENCH PRESS - MEDIUM GRIP\n3. BENT OVER BARBELL ROW\n4. PULLUPS\n5. SIDE LATERAL RAISE"<<endl;

   }
   void Cardio()
   {
   	cout<<"Following is the list of some Cardio workouts :"<<endl;
   	cout<<"1. BUTT KICK\n2. INCHWORM\n3. MOUNTAIN CLIMBER TWIST\n4. FAST FEET SHUFFLE\n5. INVISIBLE JUMP ROPE\n";

   }
   void full_body_toning()
   {
   		cout<<"Following is the list of some Full Body Toning workouts :"<<endl;
   		cout<<"1. PLATYPUS WALKS\n2. PLIE TOE SQUATS\n3. SINGLE LEG DEADLIFT\n4. SQUAT JUMP\n5. PLANK WITH KNEE TUCK TO HIP ABDUCTION\n6. PLANK WITH DUMBBELL ROW TO A TRICEPS EXTENSION\n7. SUMO LUNGES TO A SIDE KICK TO A SQUAT JUMP\n";
   }
};
class schedule
{
	public:
		int dd;
		void get_SCHEDULE()
    {
		    time_t t = time(0);   // get time now
        struct tm *now = localtime( & t );
       dd=(now->tm_wday);//extracts the day
    {
		switch(dd)
		{
			case 0:{ cout<<"SUNDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;

				    break;
			       }
            case 1:{ cout<<"MONDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;
                     break;
                   }
            case 2:{ cout<<"TUESDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;

             break;
                   }
            case 3:{ cout<<"WEDNESDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;
                     break;
                   }
            case 4:{ cout<<"THURSDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;
                     break;
                   }
            case 5:{ cout<<"FRIDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;
                     break;
                   }
            case 6:{ cout<<"SATURDAY"<<endl<<"YOUR SCHEDULE FOR TODAY IS:"<<endl;
				    break;
                   }

		}
		workouts w;
		/*read mov=choice from file*/
		int ch=mov[0]-'0';
		switch(ch)
        {
            case 1:{
                w.fat_loss();
                break;
            }
            case 2:{
                w.ab_workouts();
                break;
                }
            case 3:{
                w.Muscle_Building();
                break;
                }
            case 4:{
                w.Biceps_building();
                break;}
            case 5:{
                w.Cardio();
                break;}
            case 6:{
                w.full_body_toning();
                }
        }
    }
  }
};
class dat{
	int day,month,yr,m[12];
	public:
	dat(){
		day=D;
		month=M;
		yr=Y;
		m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
		m[4]=m[6]=m[9]=m[11]=30;
		if(yr%4==0){
			m[2]=29;
		}
		else
		m[2]=28;
	}
	dat(int a,int b,int c){
		day=a;
		month=b;
		yr=c;
		m[1]=m[3]=m[5]=m[7]=m[8]=m[10]=m[12]=31;
		m[4]=m[6]=m[9]=m[11]=30;
		if(yr%4==0){
			m[2]=29;
		}
		else
		m[2]=28;
	}
	bool operator ^(dat &obj1){
		 return (!((obj1.day==day)&&(obj1.month==month)&&(obj1.yr==yr)));
	}
	void incre(){
		for(int i=1;i<=12;i++){
			month==i?(day<m[i]?day++:((day=1)&&(month++)&&(month>12?((month=1)&&(yr++)):1)))&&(i=13):1;

		}
	}

};
void writetofile(string name)
{
    ofstream writefile;

    string file = name+".txt";
    time_t t = time(0);   // get time now
    struct tm * now = localtime( & t );
    writefile.open(file.c_str());
    writefile <<"your password: "<<password<<endl;
    writefile <<"Motive: "<<mov<<endl;
    writefile <<"subscription date was:"<<now->tm_mday<<" "<<(now->tm_mon + 1)<<" "<<(now->tm_year + 1900)<<endl;
    writefile <<"your age: "<<age<<endl;
    writefile <<"Gender: "<<gender<<endl;
    writefile <<"MobileNo.: 11111"<<contactNo<<endl;
    writefile <<"fees: "<<fee<<endl;
    writefile.close();
    mainmenu();
}
void registerpassword()/*Password registration module*/
{
    cout << "Please enter the password:" << endl;
    cin >> password;
    cout << "Please renter your password:" << endl;
    cin >> password2;
    if (password == password2)
    {
        cin.clear();
        cin.ignore(10000,'\n');
        cout<<"Enter your age :"<<endl;
        cin>>age;
        cout<<"Enter your gender :"<<endl;
        cin>>gender;
        cout<<"Enter your Mobile No."<<endl;
        cin>>contactNo;
        while(contactNo/10000000000||contactNo/1000000000==0){
            cout<<"Please enter your valid Mobile No."<<endl;
            cin>>contactNo;
        }
        cout<<"Please tell us your motive to join the gym\n";
    cout<<"[1] Fat loss\n[2] Abs building\n[3] Muscle building\n[4] Biceps building\n[5] Cardio\n[6] Full body toning"<<endl;
    cin>>choice;
     workouts W;
     switch(choice)
        {
            case 1:{
                W.fat_loss();
                W.subscription();
                mov="1";
                break;
            }
            case 2:{
                W.ab_workouts();
                W.subscription();
                mov="2";
                break;
                }
            case 3:{
                W.Muscle_Building();
                W.subscription();
                mov="3";
                break;
                }
            case 4:{
                W.Biceps_building();
                W.subscription();
                mov="4";
                break;}
            case 5:{
                W.Cardio();
                W.subscription();
                mov="5";
                break;}
            case 6:{
                W.full_body_toning();
                W.subscription();
                mov="6";
                }
        }
          cin.clear();
        cin.ignore(10000,'\n');
        writetofile(name);
        exit(1);
    }
    else
    {
        cout << "Sorry the password did not match" << endl;
        registerpassword();
    }
}
void SignUp()/*SignUp Module*/
{
    cout << "Please enter your name: " << endl;
    getline(cin, name);
    //cin.clear();
    //cin.ignore(1000,'\n');
    cout << "\nUsername - "<< name << "\nConfirm? \n\n[1] Yes\n[2] No" << endl;
    cin >> confirmation;
    if (confirmation == 1)
    {
        registerpassword();
    }
    else
    {
        cout << "Please Try again: " << endl;
        cin.clear();
        cin.ignore(10000,'\n');
        SignUp();
    }

}
void SignIn()
{

    cout<<"Enter your Username: "<<endl;
    getline(cin,name);
    string fExt=".txt";
    fExt=name+fExt;
    //char name1[100]=(name.c_str());
    fstream file1(fExt.c_str());
    if(!file1)
        {
            cout<<"Please register your self first"<<endl;
            SignUp();
        }

        file1.ignore(20,' ');
        file1.ignore(20,' ');

        string pass;
        getline(file1,pass);
        file1.ignore(20,' ');
        getline(file1,mov);
        string in;//date
        file1.ignore(100,':');
        getline(file1,in);
        int d=0,i,y=0;
        for( i=0;in[i]^' ';i++){
            d=d*10+in[i]-'0';
        }
        D=d;
        int m=0;
        i++;
        for(;in[i]^' ';i++){
            m=m*10+in[i]-'0';
        }
        M=m;
        i++;
        for(;in[i];i++){
                //cout<<in[i];
            y=y*10+in[i]-'0';
        }
        Y=y;
        cout<<"Enter the password: "<<endl;
        cin>>password;
        int count=3;
        while(pass!=password&&count){
            cout<<"you have "<<count<<" chances left\n";
           cout<<"Please Enter the correct password"<<endl;
           cin>>password;
           count--;

        }

        if(count)
        cout<<"Welcome "<<name<<endl;
        else
        {
         cout<<"Press \n[1]Go to main menu \n[2]for exit\n";
         cin>>choice;
         switch(choice)
         {
         case 1:
            mainmenu();
            break;
         case 2:
            exit(1);

         }
        }
        cout << "Hello, "<<name<<endl;
        jump:
        cout<<" What would you like to check\n[1]check todays schedule \n[2]check todays diet \n[3]check your subscription joining and no of days to be joined \n[4]Exit" <<endl;
        cin>>choice;
         do
    {
        cinfail = cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');//ignores 10000 characters until it encounters a newline
    }
    while(cinfail == true);
    {
        switch(choice)
        {
            case 1:
                {
                    schedule s;
                    s.get_SCHEDULE();
                    break;
                }

            case 2:
                {
                    diet d;
                    d.get_diet();
                    break;
                }


            case 3:
                {
                    time_t t = time(0);   // get time now
                    struct tm *now = localtime( & t );
                    dat obj,obj1(now->tm_mday,(now->tm_mon + 1),(now->tm_year + 1900));
                    int count=0;
                    while(obj^obj1)
                    {
                        obj.incre();
                        count++;
                    }
                    cout<<"Your joining date was "<<D<<"-"<<M<<"-"<<Y<<endl;
                    cout<<"You have joined from "<<count<<" days"<<endl;
                    break;
                }
            case 4:
                exit(1);
        }
    }
    goto jump;
}

void exit()
{
    exit(0);
}
void mainmenu()//function definition
{
    cout << "Hello, Would you like to log in or register\n[1] SignIn\n[2] SignUp\n[3] Exit" <<endl;
    cin >> choice;
     do
    {
        cinfail = cin.fail();
        cin.clear();
        cin.ignore(10000,'\n');//ignores 10000 characters until it encounters a newline
    }
    while(cinfail == true);
    {
        switch(choice)
        {
            case 1:
                SignIn();
                break;

            case 2:
                SignUp();
                break;

            case 3:
                exit();
        }
    }
}

int main()
{
mainmenu();//function called
}
