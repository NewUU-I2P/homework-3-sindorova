void problemSolution1(float consumed_water) {
    float cost;
    // write your code here

     totalCost = 13.0;

  // Calculate charges for first 30 cubic meters
  if (consumed_water > 0) {
    if (consumed_water <= 30) {
      cost += consumed_water * 0.4;
    } else {
          cost += 30 * 0.4;

      // Calculate charges for next 20 cubic meters
      if (consumed_water <= 50) {
           cost += (consumed_water - 30) * 0.12;
      } else {
           cost += 20 * 0.12;

        // Calculate charges for next 10 cubic meters
        if (consumed_water <= 60) {
            cost += (consumed_water - 50) * 1.4;
        } else {
          cost += 10 * 1.4;

          // Calculate charges for additional cubic meters
          cost += (consumed_water - 60) * 1.5;
        }
      }
    }
  }


    return cost;
}
