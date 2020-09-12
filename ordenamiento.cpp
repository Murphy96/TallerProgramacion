#include<bits/stdc++.h>
using namespace std;


// queue , stack , map, set
bool com (pair<int,int> a , pair<int,int> b){
    if(a.first == b.first){
        return a.second > b.second;
    }
    return a.first < b.first;
}


int main(){
    int n;
    while(cin>>n){
        // ORDENAMIENTO BURBUJA
        // for(int i = 0 ; i < n ; i++){
        //     cin>>v[i];
        // }
        // for(int i = 0 ; i < n ; i++){
        //     for(int j = 0 ; j < n-1 ; j++){
        //         if(v[j] < v[j+1]){
        //             swap(v[j], v[j+1]);
        //         }
        //     }
        // }

        // for(int i = 0 ; i < n ; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";

        // ORDENAMIENTO EN C++ ASC - STATIC
        // for(int i = 0 ; i < n ; i++){
        //     cin>>v[i];
        // }
        // sort(v , v +n);
        // for(int i = 0 ; i < n ; i++){
        //     cout<<v[i]<<" ";
        // }
        // VECTOR DIANMICO

        // vector<int> v;
        // for(int i = 0 ; i < n ; i++){
        //     int a;
        //     cin>>a;
        //     v.push_back(a);
        // }
        // // ordenado ASC
        // sort(v.begin() , v.end());
        // // ordenado Des
        // //sort(v.rbegin() , v.rend());
        // for(int i = 0 ; i < v.size() ; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";
        // ORDENAMIENTO ASC - ASC
        // vector< pair< int, int > > vp;
        // int a,b;
        // for(int i = 0 ; i < n  ; i++){
        //     cin>>a>>b;
        //     vp.push_back(make_pair(a,b));
        //     //vp.push_back({a,b});
        // }
        // sort(vp.begin() , vp.end());
        // for( int i = 0 ; i < n ; i++){
        //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
        // }
        // ORDE ASC - DES

        // vector< pair< int, int > > vp;
        // int a,b;
        // for(int i = 0 ; i < n  ; i++){
        //     cin>>a>>b;
        //     vp.push_back(make_pair(a,b));
        //     //vp.push_back({a,b});
        // }
        // sort(vp.begin() , vp.end(), com);
        // for( int i = 0 ; i < n ; i++){
        //     cout<<vp[i].first<<" "<<vp[i].second<<endl;
        // }

        // COUNTING SORT 
        
        // int v[1000];
       
        // for(int i = 0 ; i < n ; i++){
        //     cin>>v[i];
        // }
        // int sc[10000];
        // for(int i = 0 ; i < n ; i++){
        //     //int pos = v[i];
        //     sc[v[i]]++;
        // }
      
        // for(int i = 0 ; i <1000 ; i++){
        //     if(sc[i]!=0){
        //         while( sc[i]){
        //             cout<<i<<" ";
        //             sc[i]--;
        //         }
                
        //     }
        // }
        // cout<<endl;

        // for(int i = 0 ; i < n ; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";

        // busqueda binaria

        // vector<int>v;
       
        // for(int i = 0 ; i < n ; i++){
        //     int a;
        //     cin>>a;
        //     v.push_back(a);
        // }
        // sort(v.begin(), v.end());
        // for(int i = 0 ; i < n ; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        
        // auto k = lower_bound(v.begin() , v.end() , 2) - v.begin();
        // cout<<k<<endl;
       

        // LOWER AND UPPER DYNAMIC
        // vector<int>v;
       
        // for(int i = 0 ; i < n ; i++){
        //     int a;
        //     cin>>a;
        //     v.push_back(a);
        // }
        // sort(v.begin() , v.end());
        // // numero a buscar 6
        // int x = 5;
        // auto xx = lower_bound(v.begin() , v.end() , x)-v.begin();
        // auto yy = upper_bound(v.begin() , v.end() , x)-v.begin();
        // cout<<xx<<endl;
        // cout<<yy<<endl;
        // for(int i = 0 ; i < v.size() ; i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<"\n";

        // LOWER AND UPPER STATIC
        int v[1000];
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }
        sort(v, v+n);
        // numero a buscar 6
        int x = 5;
        auto xx = lower_bound(v, v+n , x)-v;
        auto yy = upper_bound(v, v+n , x)-v;
        cout<<xx<<endl;
        cout<<yy<<endl;
        for(int i = 0 ; i < n ; i++){
            cout<<v[i]<<" ";
        }
        cout<<"\n";





        
    }
    return 0;
}