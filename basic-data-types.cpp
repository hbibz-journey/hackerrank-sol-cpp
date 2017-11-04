#include<iomanip>
#include<iostream>
using namespace std;
inline
void use_io_optimizations()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);}
int main()
{use_io_optimizations();cout<<fixed<<setprecision(9);int a;long b;char c;float d;double e;cin>>a>>b>>c>>d>>e;cout<<a<<'\n'<<b<<'\n'<<c<<'\n'<<d<<'\n'<<e<<'\n';return 0;}
