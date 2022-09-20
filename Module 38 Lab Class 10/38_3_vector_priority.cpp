#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>V(3,-1); // vector of size 3 with all elements -1
    for(int i=0;i<V.size();i++){ // iterating over the vector
        cout << V[i] << " "; // printing the vector
    }
    cout << endl << endl;

    V.push_back(4);
    //iterator
    vector<int> :: iterator it;
    for(it=V.begin();it!=V.end();it++){
        cout << *it << " ";
    }
    cout<< endl << endl;

    //'auto' Register in range based traversal

    for(auto element: V){
        cout<< element <<" ";
    }
    cout<< endl << endl;

    // auto register in place of iteration
    for(auto it=V.begin();it!=V.end();it++){
        cout<< *it << " ";
    }
    cout<< endl << endl;

    priority_queue<int, vector<int>, greater<int>>PQ;
    PQ.push(1);
    PQ.push(6);
    PQ.push(2);

    while(!PQ.empty()){
        cout << PQ.top() << endl;
        PQ.pop();
    }
    cout<<endl << endl;

}
