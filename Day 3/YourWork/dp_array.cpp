#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, n=5;
char x;
 char* array = new char[n];
while(1){
    cin>>x;
    if(x=='x')break;
    
    else {
         if(i >= 5)
        {
            int ne = n + 1;
            char* narray = new char[ne];

            for(int j = 0; j < n; j++)
            {
                narray[j] = array[j];
            }

            delete[] array;

            array = narray;
            n = ne;
        }

array[i] = x;
i++;
    }

}
for (int j = 0;j<=i;j++){
    cout<<array[j]<<endl;
   
} 
return 0;    
}