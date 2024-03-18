#include <iostream>

using namespace std;
double calculateDownloadTime(double internet_speed,double file_size){
file_size *= 8*1024*1024;
internet_speed *= 1024*1024;
double downloadTime = (file_size/internet_speed)/60;
cout  << "Download time is "<<  downloadTime <<" minutes" << "(" << downloadTime/60 << " hours)";
}
int main()
{
    string input;
    double download_speed;
    double file_size;
    cout << "Enter File Size: ";
    cin>> file_size;
    cout << "Enter download speed: ";
    cin >> download_speed;
    calculateDownloadTime(download_speed,file_size);
    return 0;
}
