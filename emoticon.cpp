#include<iostream>
#include<unistd.h>
using namespace std;

class Icon
{
    private:
        char hair;
        char eye;
        char mouth;
    public:
        Icon(){
            hair = '#';
            eye = '-';
            mouth = '-';
        }
        Icon(char hair, char eye, char mouth){
            this->hair = hair;
            this->eye = eye;
            setMouth(mouth);
        }
        void setFullFace(char hair, char eye, char mouth){
            setHair(hair);
            setEye(eye);
            setMouth(mouth);
        }
        void setHair(char hair){
            this->hair = hair;
        }
        char getHair(){
            return this->hair;
        }

        void setEye(char eye){
            this->eye = eye;
        }
        char getEye(){
            return this->eye;
        }

        void setMouth(char mouth){
            this->mouth = mouth;
        }
        char getMouth(){
            return this->mouth;
        }

        void show(){
            cout << " " << getHair() << getHair() << getHair() << endl; 
            cout << getHair() << getHair()<< getHair()<< getHair()<< getHair() << endl;
            cout << " " <<  getEye() << " " <<  getEye() << endl;
            cout << "  " << getMouth() << endl;
        }

        void effect1(char hair, char eye, char mouth, int option){
            for(int i=0; i<20;i++){
                system("cls");
                cout << " " << getHair() << getHair() << getHair() << endl; 
                cout << getHair() << getHair()<< getHair()<< getHair()<< getHair() << endl;
                cout << " " <<  getEye() << " " <<  getEye() << endl;
                cout << "  " << getMouth() << endl;
                usleep(500000);

                system("cls");
                cout << " " << hair << hair << hair << endl; 
                cout << hair << hair<< hair<< hair<<hair << endl;
                if(option==1){
                    cout << " " <<  eye << " " <<  getEye() << endl;
                }
                else{
                    cout << " " <<  eye << " " <<  eye << endl;
                }
                cout << "  " << mouth << endl;
                usleep(500000);

            }
        }

};

int main(){
    
    // test create objects of class 
    Icon happy;
    happy.show();

    Icon wow('&','@','O');
    wow.show();

    // using pointer
    Icon *p;
    p = &happy;
    (*p).show();

    p = &wow;
    p->show();

    cin.get();

    system("cls");

    // Application using class

    int ratingPoint;
    cout << "Ban cam thay chat luong dich vu cua chung toi nhu the nao?" << endl;
    cout << "Hay cho chung toi biet thong qua danh gia cua ban nhe" << endl;

    cout << "Diem danh gia: ";
    cin >> ratingPoint;
    
    // Cach 1
    Icon response;
    switch(ratingPoint){
        case 1:
            response.setFullFace('@','.','^');
            response.show();
            break;
        case 2:
            response.setFullFace('#','~','-');
            response.show();
            break;
        case 3:
            response.setFullFace('&','^','-');
            response.show();
            break;
        case 4:
            response.setFullFace('$','^','v');
            response.effect1('$','>','v',1);
            break;
        case 5:
            response.setFullFace('&','*','3');
            response.effect1('&','@','O',2);
            break;
        default:
            cout << "Hay nhap lai diem tu 1-5" << endl;
    }


    // Cach 2
    Icon iconArray[5];
    iconArray[0].setHair('%');
    iconArray[0].setEye('^');
    iconArray[0]. setMouth('v');

    iconArray[1].setHair('&');
    iconArray[1].setEye('*');
    iconArray[1]. setMouth('3');

    iconArray[2].setFullFace('@','$','*');

    iconArray[3].setFullFace('&','@','O');

    iconArray[ratingPoint-1].show();

    // for(int i=0; i<5; i++){
    //     cout << endl;
    //     cout << "-------------------" << endl;
    //     iconArray[i].show();
    //     cout << endl;
    // }

    





    return 0;
}