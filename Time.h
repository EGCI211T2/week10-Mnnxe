class Time{
private:
	int m,h,s;
public:
	void set_time(int=0,int=0,int=0);
	void display();
	Time subtract(Time);
	void getTime();
};

void Time::set_time(int a, int b, int c){
	if(a>0&&a<=24) h = a; else h = 0;
	if(b>0&&b<60) m = b; else m = 0;
	if(c>0&&c<60) s = c; else h = 0;
}


//create 3 functions
//void getTime(struct Time &t);
//void display(struct Time t);

//1.  getTime function
void Time::getTime(){
	cout<<"Enter Time: ";
	cin>>h>>m>>s;
	set_time(h,m,s);
}

//2. subtract fuctions
Time Time::subtract(Time t1){
	Time t;
	int time_t1,time_t2,time_diff;
	time_t1 = h*60*60;
	time_t1 += m*60;
	time_t1 += s;

	time_t2 = t1.h*60*60;
	time_t2 += t1.m*60;
	time_t2 += t1.s;

	if(time_t1<time_t2) time_t1+=24*60*60;

	time_diff = time_t1-time_t2;
	t.h = time_diff/3600;
	t.m = (time_diff%3600)/60;
	t.s = (time_diff%3600)%60;

	return t;
}

//3. display functions
void Time::display(){
	cout<<setfill('0')<<setw(2)<<h<<':';
	cout<<setfill('0')<<setw(2)<<m<<':';
	cout<<setfill('0')<<setw(2)<<s<<endl;
}