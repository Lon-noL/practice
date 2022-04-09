#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int i = 0;
    int total = 0;
    int a[200010];//a[n];
    cin >> n;
    //cin >> a[n - 1];
    while (i < n){
      cin >> a[i];
      i++;
    }
    i = 0;
    while(i < n){
      //if (a[i] < 10)
      //    i++;
      if (a[i] > 10)
            total += a[i] - 10;
      i++;
    }
    cout << total << endl;
}
/*int a[200010];
int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++)scanf("%d",&a[i]);
  int ans=0;
  for(int i=0;i<n;i++){
    if(a[i]>10)ans+=a[i]-10;
  }
  printf("%d",ans);
}*/
