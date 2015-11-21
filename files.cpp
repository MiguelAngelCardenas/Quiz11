#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
string Read;
string Banana = "banana";
char Myfile[50];
int index = 0;
int index2 = 0;
int count = 0;
cout << "Type the name of your file: ";
cin >> Myfile;

ifstream read_file (Myfile);
if (read_file.is_open()){
while (getline(read_file , Read)){
      index = 0;
      while (index < Read.length()) {
        char letter = Read[index];
        if ( letter == 'B' || letter== 'b'){
          index2 = index + 1;
          char letter = Read[index2];
          if (letter == 'A' || letter== 'a'){
            index2++;
            char letter = Read[index2];
            if (letter == 'N' || letter== 'n'){
              index2++;
              char letter = Read[index2];
              if (letter == 'A' || letter== 'a'){
                index2++;
                char letter = Read[index2];
                if (letter == 'N' || letter== 'n'){
                  index2++;
                  char letter = Read[index2];
                  if (letter == 'A' || letter== 'a') {
                    count++;
                  }
                }
              }
            }
          }
        }
        index = index + 1;
}

    }read_file.close();
    }else{
      cout << "Failed opening the file" << endl;
    }
cout << "found " << count << " bananas" << endl;
return 0;
}
