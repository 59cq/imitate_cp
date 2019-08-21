#include <iostream>
#include <fstream>
using namespace std;

int main(int ragc,char* ragv[]){

    fstream fs(ragv[1],ios::in|ios::binary);
    if(fs.good()){
        cout << "open src success" << endl;
    }else{
        cout << "open src failed" << endl;
    }

    fstream fd(ragv[2],ios::out|ios::binary);
    if(fd.good()){
        cout << "open dest success" << endl;
    }else{
        cout << "open dest failed" << endl;
        return -1;
    }

    char buf[1500];

    while(1){
        fs.read(buf,sizeof(buf));
        if(fs.gcount() != 0){
            cout << "read " << fs.gcount() << " success" << endl;
        }else{
            cout << "read " << fs.gcount() << " failed" << endl;
            return -1;
        }
        fd.write(buf,fs.gcount());
        if(1 == fd.good()){
            cout << "write " << fs.gcount() << " success" << endl;
        }else{
            cout << "write " << fs.gcount() << " failed" << endl;
            return -1;
        }
        if(fs.eof()){
            break;
        }
    }
    fs.close();
    fd.close();
    cout << "copy success" << endl;

}
