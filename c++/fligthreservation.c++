#include <iostream>
using namespace std;
const int total_seats = 50;
void show_seats(bool seats[]) {
    cout << "\nAvailable seats: ";
    for (int i = 0; i < total_seats; i++) {
        if (seats[i]) {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

void book_seat(bool seats[], int seat_number) {
    if (seat_number < 1 || seat_number > total_seats) {
        cout << "Invalid seat number." << endl;
        return;
    }
    if (seats[seat_number - 1]) {
        seats[seat_number - 1] = false;
        cout << "Seat " << seat_number << " booked successfully." << endl;
    } else {
        cout << "Seat " << seat_number << " is already booked." << endl;
    }
}

void cancel_seat(bool seats[], int seat_number) {
    if (seat_number < 1 || seat_number > total_seats) {
        cout << "Invalid seat number." << endl;
        return;
    }
    if (!seats[seat_number - 1]) {
        seats[seat_number - 1] = true;
        cout << "Seat " << seat_number << " cancellation successful." << endl;
    } else {
        cout << "Seat " << seat_number << " is already available." << endl;
    }
}

int main() {
    bool seats[total_seats];
    for (int i = 0; i < total_seats; i++) {
        seats[i] = true; // All seats start as available
    }

    int choice, seat_number;

    do {
        cout << "\n========== Flight Reservation System ==========\n";
        cout << "1. Show Available Seats\n";
        cout << "2. Book a Seat\n";
        cout << "3. Cancel a Seat\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                show_seats(seats);
                break;
            case 2:
                cout << "Enter seat number to book (1–" << total_seats << "): ";
                cin >> seat_number;
                book_seat(seats, seat_number);
                break;
            case 3:
                cout << "Enter seat number to cancel: ";
                cin >> seat_number;
                cancel_seat(seats, seat_number);
                break;
            case 4:
                cout << "Exiting the system. Thank you!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 4);
    return 0;
}
