/*****************************************************
*#*##################################################*                                                  *
*#****************************************************                                                  *
*#*       URI:          sabujbd,                   *#*
*#*       UVA:          sabuj_coder.               *#*
*#*       LIGHTOJ:      return_SS,                 *#*
*#*       DEVSKILL:     return_SS                  *#*
*#*       CODEFORCES:   return_SS                  *#*
*#*       TIMUS:        return_SS                  *#*
*#*       CODEMARSHAL:  return_SS                  *#*
*#*       HACKERRANK    return_SSP                 *#*
*#*                                                *#*
*#*                                                *#*
*#*          Sabuj sarker                          *#*
*#*          def: CSE;                             *#*
*#*    Daffodil International University           *#*
*#*                                                *#*
*#*                                                *#*
*****************************************************
*####################################################
*****************************************************/
#include<bits/stdc++.h>
using namespace std;
#include<stack>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<list>
typedef      string                  S;
typedef      long long               ll;
typedef      long long int           lli;
typedef      unsigned int            ui ;
typedef      unsigned long long int  ulli;
typedef      double                  D;
typedef      float                   f;
typedef      int                     I;
#define      Clear(a) memset( a, 0, sizeof(a))
#define      sc     scanf
#define      pf     printf
#define      cn     cin
#define      ct     cout
#define      en     endl
#define      pb     push_back
#define      pp     pop_back
#define      t_r     true
#define      f_r     false
#define      PI    a(cos)
#define      nl     NULL
#define      FOR(i , x, y ) for(  i = (x); i<=(y); i++ )
#define      ROR(i , x, y ) for(  i = (x); i>=(y); i-- )
#define      priority_queue<int,vector<int>,compare>pq;
#define      N 100000
int prime[N];
void  permutation(string ss)
{sort(ss.begin(),ss.end());
    do{cout<<ss<<endl;}while(next_permutation(ss.begin(),ss.end()));}

I Bigmod( I b , lli p, I m )
{if( p== 0 ){return 1;}
    if( p % 2 == 0 )
    {lli re = Bigmod( b, p/2, m );return ( re*re )%m;}
    else if( p%2 == 1 ){lli p1 = b%m;lli p2 = Bigmod( b, p-1, m );return ( p1 * p2 )%m;}}

void Sieve_of_Eratosthenes()
{   for( int i = 2; i<=N; i++){prime[i] = 1;}
    prime[0] = prime[1] = 0;
    int root = sqrt(N);
    for( int i = 2; i<=root; i++ ){
    for( int j = i*i; j<=N; j+=i ){if(prime[j]){prime[j] = 0;}}}
}
int column[20], diagonal1[40], diagona12[40],quuen[20];;

void  Back_nqueen(int a, int n){
   if( a == (n+1)){pf("(row,column) = ");
      for( int i = 1; i<=n; i++)
        pf("(%d, %d)",i,quuen[i]);pf("\n");return ;}
   for( int i = 1; i<=n; i++ ){
       if(column[i] || diagonal1[i+a] || diagona12[n+i-a]) continue;
       quuen[a] = i;column[i] = diagonal1[i+a] = diagona12[n+i-a] = 1;
       Back_nqueen(a+1,n);column[i] = diagonal1[i+a] = diagona12[n+i-a] = 0;
       }
}
int used[20], number[20];
int c = 0;
int permutation( int pos)
{
    if(pos>4){
            c++;
        for( int i = 1; i<=4; i++){
            pf("%d ",number[i]);
        }
        pf("\n");
        return 0;
    }
    else{
        for( int i =1 ; i<=4; i++){
            if(used[i]==0)
                used[i] =1;
                number[pos] = i;
                pf("be\n");
            permutation(pos+1);
            used[i] = 0;
            pf("af\n");
        }
    }
    return c;
    /*
    if( a==n+1){
        for( int i = 1; i<=n; i++){
            pf("%d ",number[i]);
        }
        pf("\n");
        return;
    }
    for( int i = 1; i<=n; i++){
        if(!used[i])
            used[i] = 1;
        number[a] = i;
        permutation(a+1,n);
        used[i] = 0;

    }
    */
}
int  main()
{

     for( int i = 0; i<20; i++){used[i]=0;number[i]=0;}
     int n;
    // cn>>n;
     int x = permutation(1);
     pf("%d\n",x);
     return 0;
}


