#include<iostream>
#include<fstream>
using namespace std;

void file_rw(char data[100],char filename[20]){
    ofstream outfile;
    outfile.open(filename,ios::out | ios::app);
    outfile<<data<<endl;
    outfile.close();
    
    ifstream infile;
    infile.open(filename);
    if(!infile.eof()){
        infile>>data;
    }
    infile.close();
}

void file_copy(char filename[20],char copyname[20]){
    char data[100];
    ifstream infile;
    infile.open(filename);
    ofstream outfile;
    outfile.open(copyname);
    while(!infile.eof()){
        infile>>data;
        outfile<<data<<endl;
    }
    infile.close();
    outfile.close();
}
int main(){
    char data[100];
    char filename[20] = "test1.t";
    char copyname[20] = "test2.t";
    cin.getline(data,100);
    file_rw(data,filename);
    cin>>data;
    cin.ignore();
    file_rw(data,filename);
    file_copy(filename,copyname);
    return 0;
}