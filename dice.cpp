// ECE 108 Lab 3 
//Jason Antao

#include <iostream>
using namespace std;
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float highlow(){
     srand ((unsigned int)time(NULL));

    float one = 0;
    float two = 0;
    float three = 0;
    float four = 0;
    float five = 0;
    float six = 0;

    int min = 1;
    int max = 6;

   float rollcount = 100;
   float runs = 10000;

    float result = 0;

    float high = 0;
    float low = 0;
    float equal=0;

for (int j=0; j< runs; j++){
        for (int i=0; i< rollcount; i++){
            result = min + rand() / ((RAND_MAX)/(max-min+1)+1);
            //cout << result << endl;
            if (result == 1 || result == 2 || result == 3){
                low++;
            }
            if (result == 4 || result == 5 || result == 6){
                high++;
            }
        }
    if (low == high){
        equal++;
        //For testing purposes below...........
        //
        //
        //
        //cout << equal << endl;
        //
        //
        //
        //--------------------------------------
    }
    high = 0;
    low = 0;
}

 float fractionequal = equal/runs;

//cout << "Fraction of Rolls Equal for 100,000 rolls: " << fractionequal << endl;
cout << fractionequal << endl;
}



float rolls(int rollcount){

    srand ((unsigned int)time(NULL));

    float one = 0;
    float two = 0;
    float three = 0;
    float four = 0;
    float five = 0;
    float six = 0;

    int min = 1;
    int max = 6;

   // float rollcount = 100;
    float result = 0;

    float high = 0;
    float low = 0;

    for (int i=0; i< rollcount; i++){
        
        result = min + rand() / ((RAND_MAX)/(max-min+1)+1);
       // cout << result << endl;

        if (result == 1){
            one++;
        }
         if (result == 2){
            two++;
        }
         if (result == 3){
            three++;
        }
         if (result == 4){
            four++;
        }
         if (result == 5){
            five++;
        }
         if (result == 6){
            six++;
        }

    }

    float onefrac = one/rollcount;
    float twofrac = two/rollcount;
    float threefrac = three/rollcount;
    float fourfrac = four/rollcount;
    float fivefrac = five/rollcount;
    float sixfrac = six/rollcount;

    // float result6array[6];
    // result6array[0] = onefrac;
    // result6array[2] = twofrac;
    // result6array[3] = threefrac;
    // result6array[4] = fourfrac;
    // result6array[5] = fivefrac;
    // result6array[6] = sixfrac;

    // return result6array;

cout << "1: " << onefrac << endl;
cout << "2: " << twofrac << endl;
cout << "3: " << threefrac << endl;
cout << "4: " << fourfrac << endl;
cout << "5: " << fivefrac << endl;
cout << "6: " << sixfrac << endl;
//cout << "End of dice simulation for " << rollcount << " rolls." << endl;




}

// for (int j=0; j<10000; j++){
//     if (result == 1 || result == 2 || result == 3)
// }

float twelverolls(int rolltwelve){

    srand ((unsigned int)time(NULL));

 
    float two = 0;
    float three = 0;
    float four = 0;
    float five = 0;
    float six = 0;
    float seven = 0;
    float eight = 0;
    float nine = 0;
    float ten = 0;
    float eleven = 0;
    float twelve = 0;

    int min = 1;
    int max = 6;

    
   // float rollcount = 100;
    float resultone = 0;
    float resulttwo = 0;
    float sumresult = 0;

    for (int i=0; i< rolltwelve; i++){
        
        resultone = min + rand() / ((RAND_MAX)/(max-min+1)+1);
        resulttwo = min + rand() / ((RAND_MAX)/(max-min+1)+1);
        sumresult = resultone+resulttwo;
        //
        //
        //
        //cout << "Result from rolling 2 evenly-weighted dice with six sides each" << endl;
        // cout << sumresult << endl;
        // cout << seven/rolltwelve << endl;
        //cout << result << endl;

        if (sumresult == 2){
            two++;
        }
        if (sumresult == 3){
            three++;
        }
        if (sumresult == 4){
            four++;
        }
        if (sumresult == 5){
            five++;
        }
        if (sumresult == 6){
            six++;
        }
        if (sumresult == 7){
            seven++;
        }
        if (sumresult == 8){
            eight++;
        }
        if (sumresult == 9){
            nine++;
        }
        if (sumresult == 10){
            ten++;
        }
        if (sumresult == 11){
            eleven++;
        }
        if (sumresult == 12){
            twelve++;
        }
    }

    
    float twofrac = two/rolltwelve;
    float threefrac = three/rolltwelve;
    float fourfrac = four/rolltwelve;
    float fivefrac = five/rolltwelve;
    float sixfrac = six/rolltwelve;
    float sevenfrac = seven/rolltwelve;
    float eightfrac = eight/rolltwelve;
    float ninefrac = nine/rolltwelve;
    float tenfrac = ten/rolltwelve;
    float elevenfrac = eleven/rolltwelve;
    float twelvefrac = twelve/rolltwelve;


cout << "2: " << twofrac << endl;
cout << "3: " << threefrac << endl;
cout << "4: " << fourfrac << endl;
cout << "5: " << fivefrac << endl;
cout << "6: " << sixfrac << endl;
cout << "7: " << sevenfrac << endl;
cout << "8: " << eightfrac << endl;
cout << "9: " << ninefrac << endl;
cout << "10: " << tenfrac << endl;
cout << "11: " << elevenfrac << endl;
cout << "12: " << twelvefrac << endl;
//cout << "End of two-dice simulation for " << rolltwelve << " rolls." << endl;


}





int main (){
    
//Is this correct or incorrect output?
//Is Makefile proper?

//float resultsix[6];
cout << "Question 1:" << endl;
cout << "10 times" << endl;
rolls(10);
cout << "1000 times" << endl;
rolls(10000);
cout << "100000 times" << endl;
rolls(100000);

cout << "Question 2:" << endl;
highlow();
cout << "Question 3:" << endl;
twelverolls(10000);

}