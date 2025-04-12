// Function to get the seat number from the user
int getSeatNumber(const Flight& flight, const Flight& flight_num) {
    int seatNumber;
    bool validSeat = false;

    while (!validSeat) {
        cout << "\nPlease key in a seat number to choose a seat (eg: A2): ";
        cin >> seatNumber;
        cin.ignore(); // Consume the newline character left by cin

        if (seatNumber < 1 || seatNumber > NUM_SEATS || flight.seats[seatNumber - 1]) {
            cout << "Invalid or already booked seat. Please choose another.\n";
        } else {
            validSeat = true;
        }
    }

    return seatNumber;
}