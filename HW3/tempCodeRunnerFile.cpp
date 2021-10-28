       if (student[s].totalGrade > 90) { 
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[0] << endl;}
        else if((student[s].totalGrade < 90) && student[s].totalGrade >= 80) {
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[1] << endl;}
        else if((student[s].totalGrade < 80) && student[s].totalGrade >= 70) {
         cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[2] << endl;}
        else if((student[s].totalGrade < 70) && student[s].totalGrade >= 60) {
         cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[3] << endl;}
        else if ((student[s].totalGrade < 60) && student[s].totalGrade >= 50) {
        cout << student[s].firstName << "\t" << student[s].lastName << "\t" << arr[4] << endl;}