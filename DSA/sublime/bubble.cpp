#include<bits/stdc++.h>
using namespace std;

 void sort(int array[], int size);

int main(){
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif

  

  int array[]= {56, 575,343,1231};
 

  int size = sizeof(array)/sizeof(array[0]);

        sort(array, size);


      for(int element : array){
        cout <<element<< " ";

      }


     }


     void sort(int array[], int size){

        int temp;
        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i -1; j++){
                if(array[j] > array[j + 1]){
                    temp = array[j];
                    array[j] = array [j +1];
                    array[j + 1] = temp;
                }
            }
        }

     }

     
