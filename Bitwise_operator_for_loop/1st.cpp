// #include<iostream>
// using namespace std;

// int main(){

//     int a=4;
//     int b=6;

//     // cout<<"a & b"<<(a&b)<<endl;
//     // cout<<"a | b"<<(a|b)<<endl;
//     // cout<<"~a"<<~a<<endl;
//     // cout<<"a^b"<<(a^b)<<endl;

//     cout<< (17>>1)<<endl;
//     cout<<(17>>2)<<endl;
//     cout<<(19<<1)<<endl;
//     cout<<(21<<2)<<endl;


// }

// #include<iostream>
// using namespace std;

// int main(){

//     int a,b=1;
//     a=10;
//     if(++a)
//     cout<<b;
//     else
//     cout<<++b;
// }





// #include<iostream>
// using namespace std;

// int main(){

//     int a=1;
//     int b=2;

//     if(a-- > 0 && ++b>2){
//         cout<<"Stage1 - Inside If";
//     }
//     else{
//         cout<<"Stage2-Insidee else";
//     }
//     cout<<a<<" "<<b<<endl;
// }

// #include<iostream>
// using namespace std;

// int main(){
//     int a=1;
//     int b=2;

//     if(a-- > 0 || ++b>2){
//         cout<<"Stage 1 - Inside If";
//     }
//     else{
//         cout<<"Stage2-Inside else";
//     }
//     cout<<a<<" "<<b<<endl;
// }



// #include<iostream>
// using namespace std;

// int main(){
//     int number=3;
//     cout<<(25 * (++number));
// }


#include<iostream>
using namespace std;


int main(){
    int a=1;
    int b=a++;
    int c=++a;
    cout<<b;
    cout<<c;
}