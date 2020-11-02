#include <iostream>

using namespace std;

int main()
{
    int runner_safety, runner_speed, coyote_speed, coyote_total_d,  separation = 50;
    float runner_time,coyote_time;

    cout << "Enter the safety distance, the road-runner´s speed and the coyote´s speed: \n";
    cin >> runner_safety >> runner_speed >> coyote_speed;

    coyote_total_d = separation + runner_safety; // coyote total distance to run 

    runner_time = (float)runner_safety/runner_speed; //total time for the runner to get to safety
    coyote_time = (float)(coyote_total_d/coyote_speed); //total time for the coyote to run up to safety

    if (coyote_time<=runner_time)
    {
        cout << "Yum"<<endl;
    }
    else
    {
        cout<<"Meep Meep"<<endl;
    }
        
    return 0;

}







