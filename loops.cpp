#include <iostream>
#include <ctime>


using namespace std;

int otherFactorial(int n);
int they();

int main(){
        int n;
        cout << "Enter a number greater than 4:  " ;
        cin >> n;

        if (n < 5){
                cout << "bad input.";
                return -1;
        }


        clock_t begin = clock();

        int meme[n+1];
        int b = n;
        int out = 1;


        for (int x = 1; x <= b ; x++){
                out *= x ;
                meme[x] = out;
        }

        cout << meme[b] << endl;
        cout << meme[b - 1] << endl;
        cout << meme[b - 2] << endl;
        cout << meme[b - 3] << endl;

        clock_t end = clock();

        double elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
        cout << elapsed_secs << endl;


        begin = clock();

        for (int i = 0; i < 5; i++){
                cout << otherFactorial(n-i);
        }

        end = clock();

        elapsed_secs = double(end - begin) / CLOCKS_PER_SEC;
        cout << elapsed_secs << endl;

        return 0;
}

int otherFactorial(int n){
        int b = n;

        int out = 1;
        for (int x = 1; x <= b; x++)
                out *=x;


        return out;

}

int they(){
  cout << "They say that my name is jeff and that I like memes because memes are among the best things in the entire universe."
}
