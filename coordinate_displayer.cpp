#include <iostream>
using namespace std;

//setting up polynomials



int main(){

    //set-up for coordinat system
    int y = 10; // -10 ---- -10 in y-axis
    int x = 25; // -20 ---- +20 in x-axis
    char xaxis = 196; //─
    char yaxis = 179; // │ |
    char middot = 250; // ·
    char center = 197; //┼

    //giving coordinats
    int x1,y1;
    int counter = 0;
    int matris[][2] = {
        {-9,7},
        {-8,6},
        {-4,4},
        {2,-1}

    }; // <----- your coordinates are here

    int lenght = sizeof(matris)/sizeof(matris[0]);


    x1 = matris[counter][0]; 
    y1 = matris[counter][1];
    


    int coordinaty = (y-y1);
    int coordinatx = (x+x1);

    
    

    // (x+x1, (y+1)-y1) ---> finding coordinat formula
    // determine the y's positivity;


    //positive part of y-axis

    // first for loop is exist for printing Y-axis.
    // second for loop is exist for printing spaces.

    for(int i = 0; i < y; i++){
        x1 = matris[counter][0]; 
        y1 = matris[counter][1];
        int coordinaty = (y-y1);
        int coordinatx = (x+x1);
        //for (-,+) points
        for(int j = 0; j <= 2*x; j++){
            x1 = matris[counter][0]; 
            y1 = matris[counter][1];
            int coordinaty = (y-y1);
            int coordinatx = (x+x1);

            
                
            if(i == coordinaty && j == coordinatx){
                cout << middot;
                if(counter < lenght - 1){
                    counter++;
                }
            }

            else if(j == x){
                cout << yaxis;
            }

            else{cout << " ";}
                
        }
        
        cout << endl;

    }


    //after positive part of y-axis, print x-axis
    for(int i = 0; i < x*2; i++){
        x1 = matris[counter][0]; 
        y1 = matris[counter][1];
        int coordinaty = (y-y1);
        int coordinatx = (x+x1);
        //for (x,0) points
        if(y1 == 0){
           if(i == coordinatx){
               cout << middot;
               if(counter < lenght - 1){
                    counter++;
               }
           }
           else{
                // finding (0,0) coordinats and giving " ┼ " ascii code: 197 
               if(i == (x)){cout << center;}
               else{cout << xaxis;} 
           }
        }
        else{
            if(i == (x)){
            cout << center;
            }
            else{
                cout << xaxis;
            }
        }
        
    }
    cout << endl;
    
    //printing negative part of y-axis
    int negativeY = y1*(-1) - 1;
    // first for loop is exist for printing Y-axis.
    // second for loop is exist for printing spaces.
    for(int i = 0; i < y; i++){
        x1 = matris[counter][0]; 
        y1 = matris[counter][1];
        int coordinaty = (y-y1);
        int coordinatx = (x+x1);
        int negativeY = y1*(-1) - 1;

        for(int j = 0; j <= 2*x; j++){

            x1 = matris[counter][0]; 
            y1 = matris[counter][1];
            int coordinaty = (y-y1);
            int coordinatx = (x+x1);
            
            if(i == negativeY && j == coordinatx){
                cout << middot;
                if(counter < lenght - 1){
                    counter++;
                }
            }
            else if(j == x){
                cout << yaxis;
            }

            else{cout << " ";}
        }
        cout << endl;
    }
    
    cout << "lenght: " << lenght;
    cout << " counter: "<< counter;
    cout << " x1: " << x1 << " y1: " << y1;


    return 0;
}