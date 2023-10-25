#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

using namespace std;

//let roll a dice haha

int main(){

srand(time(0));

int first_die  {rand() % 6 +1};
int second_die {rand() % 6 +1};

cout << "The first die: "<< first_die << endl << "The second die: "<< second_die;
return 0;
}