#include <iostream>
#include<cstring>
#include<string>

using namespace std;


void cha(int &get, char ptr){

               if(ptr == '0'){
                    get = 0;
                }
                else if(ptr == '1'){
                    get = 1;

                }
                 else if(ptr == '2'){
                    get = 2;

                }
                 else if(ptr == '3'){
                    get = 3;

                }
                 else if(ptr == '4'){
                    get = 4;

                }
                 else if(ptr == '5'){
                    get = 5;

                }
                 else if(ptr == '6'){
                    get =6;

                }
                 else if(ptr == '7'){
                    get = 7;

                }
                 else if(ptr == '8'){
                    get = 8;

                }
                 else if(ptr == '9'){
                    get = 9;

                }


}
///...............................................
int num_c(char *ptr){     /// for c strings

bool check = false;
size_t siz= strlen(ptr);

int get;


for(int i = 0; i<strlen(ptr); ++i){

    if(isdigit(ptr[i]) || ptr[0] == '-'){

        check = true;
    }
    else{
        check = false;
        break;
    }

}


if(check){

                        int in;
            (ptr[0] == '-') ? in=1, siz-=1: in=0;   ///

               cha(get,ptr[in]); ///


                int j =in+1;

        bool check2;

        (siz>1)? check2=true : check2=false;  ///

        if(check2){

  int ch = 10;

    for(;j<strlen(ptr); ++j){


                if(ptr[j] == '0'){
                    get*=ch;
                    get+=0;
                }
                else if(ptr[j] == '1'){
                      get*=ch;
                    get+=1;

                }
                 else if(ptr[j] == '2'){
                      get*=ch;
                    get+=2;

                }
                 else if(ptr[j] == '3'){
                      get*=ch;
                    get+=3;

                }
                 else if(ptr[j] == '4'){
                     get*=ch;
                    get+=4;

                }
                 else if(ptr[j] == '5'){
                     get*=ch;
                    get+=5;

                }
                 else if(ptr[j] == '6'){
                     get*=ch;
                    get+=6;

                }
                 else if(ptr[j] == '7'){
                     get*=ch;
                    get+=7;

                }
                 else if(ptr[j] == '8'){
                     get*=ch;
                    get+=8;

                }
                 else if(ptr[j] == '9'){
                     get*=ch;
                    get+=9;

                }
} ///

        }
        if(in!=0){
        get *=-1;

            }

        return get;
}///

else{
        cout<<"Error! not a full digit number!"<<endl;
    return 0;
}

} /// end
///...............................................................................


int num_c(char ptr){     /// for c strings

bool check = false;
int get;

    if(isdigit(ptr)){

        check = true;
    }
    else{
        check = false;

    }


if(check){

                cha(get,ptr); ///
                 return get;
}

else{
     cout<<"Error! not a full digit number!"<<endl;
    return 0;
}

} ///

int main()
{

char vic[] = "-457";

cout<<num_c(vic)<<endl;

cout<<atoi(vic)<<endl;




}
