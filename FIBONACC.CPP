#include<iostream.h>

int fibonacci(int n){
    if(n<=0){
	return 0;
    }else if(n==1){
	return 1;
    }else {
	return fibonacci(n-1)+fibonacci(n-2);
    }
}
int main(){
    int count;
    cout<<"Enter the numbers of Fibonacci numbers to be generated";
    cin>>count;

    cout<<"Fibonacci Series:";
    for(int i=0;i<count;++i){
	cout<<fibonacci(i)<<" ";
    }
    cout<<endl;
    getch();
}