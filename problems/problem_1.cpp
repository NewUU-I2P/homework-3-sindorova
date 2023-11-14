void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
cout << "Enter water consumption in cubic meters: ";
  cin >> consumption;

  // Calculate the total cost
  cost = 13.0;
  if (consumption > 0) {
    if (consumption <= 30) {
      cost += consumption * 0.4;
    } else {
      cost += 30 * 0.4;

      if (consumption <= 50) {
        cost += (consumption - 30) * 0.12;
      } else {
        cost += 20 * 0.12;

        if (consumption <= 60) {
          cost += (consumption - 50) * 1.4;
        } else {
          cost += 10 * 1.4;
          cost += (consumption - 60) * 1.5;
        }
      }
    }
  }

  // Display the total cost
  cout << "Total cost: $" << cost << endl;
return 0;
}

  
 
