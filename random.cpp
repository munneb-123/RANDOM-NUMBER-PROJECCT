#include <iostream>
#include <ctime>
using namespace std;
int my_random(int m){
int random_time,*ptr,fr,g,*k,l;
random_time=time(0);
ptr=&random_time;
fr=time(0);
g=fr%20;
k=ptr+g;
l=((*k)%m)+1;
return l;
}
int main(){

int y;
cout<<"\n\nENTER THE NUMMBER IN BETWEEN YOU WANT TO CREATE RANDOM NUMBER FOR EXAMPLE IF YOU WILL ENTER SIX IT WILL CREATE A NUMBER BETWEEN 1-6\n\n";
cin>>y;
int to_get=my_random(y);
cout<<to_get;
    return 0;
}