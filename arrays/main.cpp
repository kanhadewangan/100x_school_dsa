#include<bits/stdc++.h>
using namespace std;


void reversePrint(const vector<long long>& arr, int n)
{
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << sum;
}

void minimumElementPos(const vector<long long>&arr , int n){
    long long minElement = arr[0];
    int pos = 0;
    long long element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i];
            element = arr[i];
            pos = i;
        }
    }
    cout << element << " " << pos+1 << endl;
}

void maxElem(vector<long long>&arr,int n){
    long long max = arr[0];
    int pos = 0;
    for(int i =1; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
            pos = i;
        }

    }
    cout << max << " " << pos+1 << endl;

}
void searchElement(const vector<long long>& arr, long long x) {
    int cnt = 0;
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        if (arr[i] == x) {
            cnt++;
        }
        
    }
    cout << cnt << endl;
}
void sortedArray(const vector<long long>&arr, int n){
    string result = "YES";
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            result = "NO";
            break;
        }
    }
    cout << result << endl;
}

void reverseArray(vector<long long>& arr, int n) {
   int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}


void intersectionOfTwoArrays(const vector<long long>& arr1, const vector<long long>& arr2) {
    unordered_set<long long> setArr2(arr2.begin(), arr2.end());
    vector<long long> intersection;

    for (const auto& num : arr1) {
        if (setArr2.count(num)) {
            intersection.push_back(num);
        }
    }

    if (intersection.empty()) {
        cout << "NO INTERSECTION\n";
    } else {
        for (const auto& num : intersection) {
            cout << num << " ";
        }
        cout << "\n";
    }
}


int main(){
       
    

}