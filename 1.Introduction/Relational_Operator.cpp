#include <iostream>
using namespace std;

int main(){
   int t;
   int a;
   int b;

   cin>>t;
   for(int i=0;i<t;i++){
      cin>>a>>b;
      if(a>b){
         cout<<">"<<endl;
      }else if(a<b){
         cout<<"<"<<endl;
      }else{
         cout<<"="<<endl;
      }
   }
}
