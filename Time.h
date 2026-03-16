struct Time{
	int m,h,s;
};


//create 3 functions
void getTime(struct Time &t);
void display(struct Time t);

//1.  getTime function
void getTime(struct Time &t){
	cout<<"Enter Time: ";
	cin>>t.h>>t.m>>t.s;
}

//2. subtract fuctions

struct Time subtract(struct Time t1,struct Time t2){
	struct Time t3;
	
	int time_t1,time_t2,time_diff;
	time_t1 = t1.h*60*60;
	time_t1 += t1.m*60;
	time_t1 += t1.s;

	time_t2 = t2.h*60*60;
	time_t2 += t2.m*60;
	time_t2 += t2.s;

	if(time_t1<time_t2) time_t1+=24*60*60;

	time_diff = time_t1-time_t2;
	t3.h = time_diff/3600;
	t3.m = (time_diff%3600)/60;
	t3.s = (time_diff%3600)%60;

	return t3;
}


//3. display functions
void display(struct Time t){
	cout<<setfill('0')<<setw(2)<<t.h<<':'<<setfill('0')<<setw(2)<<t.m<<':'<<setfill('0')<<setw(2)<<t.s<<endl;
}