#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//function prototypes
void doubleeveryseconddigit( vector<int> &cnum ,vector<int> &cnumdoubled);
int  sumdoubleddigits(const vector<int> &cnum );
int sumremainingdigits(const vector<int> &cnum );
bool isvalidnumber(int sum,int sum2);


int main()
{
    cout<<"credit card validation(to exit enter -1)"<<'\n';
    cout<<"enter your credit card number (to end enter -2):"<<'\n';
     while(true){
      vector<int> cnum;
      vector<int> cnumdoubled;
      int i=0;
      int x=0;
      
      
    
while (true) {
    cin >> x;
    

    if (x == -1) {
        cout << "YOU HAVE EXITED\n";
        return 0;
    }
    if(x==-2){
break;
    }
    if(x<0||x>9){
        cout<<"invalid digit"<<'\n';
        continue;
    }

    cnum.push_back(x);
    
}
if (cnum.size() < 13 || cnum.size() > 19) {
    cout << "Invalid card length\n";
    continue;
}

cnumdoubled.resize(cnum.size());
//step1:double every second digit
doubleeveryseconddigit(cnum,cnumdoubled);

//verify steps of luhn algorithm

//step2:calculate sum
int sum=sumdoubleddigits(cnumdoubled);
int sum2=sumremainingdigits(cnum);
//step3:validate
int sum3=isvalidnumber(sum,sum2);
if(sum3){
    cout<<"the credit card number is valid"<<'\n';

}
else{
    cout<<"the credit card number is not valid"<<'\n';
}

     }


    return 0;
}
//double every second digit from the right
void doubleeveryseconddigit( vector<int> &cnum ,vector<int> &cnumdoubled){
    int i=0;
    for(i=0;i<cnum.size();i++){
        if((cnum.size()-i)%2==0){
            cnumdoubled[i]=cnum[i]*2;{
                if(cnumdoubled[i]>9)
                cnumdoubled[i]-=9;
          }
        }
    }/////////////////////////////////////continue////////////////////////////////////////////////////////
}
//sum of doubled digits
int sumdoubleddigits(const vector<int> &cnum ){
    int i=0;
    int sum=0;
    for(i=0;i<cnum.size();i++){
    if((cnum.size()-i)%2==0){
sum+=cnum[i];

    }
}
    return sum;
}
//sum of remaining digits

int sumremainingdigits(const vector<int> &cnum ){
    int i=0;
    int sum2=0;
    for(i=0;i<cnum.size();i++){
        if((cnum.size()-i) % 2!=0){
            sum2+=cnum[i];
        }
    }
    return sum2;
    //validate final sum
}
bool isvalidnumber(int sum,int sum2){
    int sum3=sum+sum2;
    if(sum3%10==0){
        return true;
    }
    else{
        return false;
    }
}
