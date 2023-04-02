/*
Output :
201 300
211 223 227 229 233 239 241 251 257 263 269 271 277 281 283 293 
 total prime numbers from 201 to 300 are 16
 */
#include<iostream>
#include<math.h>
using namespace std;
int main() {
    int start,end;
    cin>>start>>end;            //starting and ending of range
    int size=end-start;

    bool isPrime[size+1];
    for(int i=0;i<=size;i++){
        isPrime[i]=true;
    }

    int sqrtn=sqrt(end);
    bool primes[sqrtn];
    for(int i=0;i<=sqrtn;i++){
        primes[i]=true;
    }

    for(int i=2;i<=sqrtn;i++){
        if(primes[i]){
            int j=i*i;
            while(j<=sqrtn){
                primes[j]=false;
                j+=i;
            }
        }
    }
    for(int i=2;i<=sqrtn;i++){
        if(primes[i]){
            int j=start/i*i;
            while(j<start){
                j+=i;
            }
            while(j<=end){
                isPrime[j-start]=false;
                j+=i;
            }
        }
    }
    int count=0;
    for(int i=0;i<=size;i++){
        if(isPrime[i]){
            cout<<i+start<<' ';
            count++;
        }
    }
    cout<<"\n total prime numbers from "<<start<<" to "<<end<<" are "<<count;

    return 0;
}