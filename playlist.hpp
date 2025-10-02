//
// Created by lkant on 10/2/2025.
//

#ifndef THE_FREAKING_EXAM_1_PLAYLIST_H
#define THE_FREAKING_EXAM_1_PLAYLIST_H


class playlist {

	public:
	int numSongs_; // number of songs in the playlist
	double totalMinutes_; // total play time of the playlist (in minutes)

	//A default constructor that initializes numSongs_ to 0 and totalMinutes_ to 0.0.
	playlist();

	//A parameterized constructor that takes two arguments (int n, double t) and initializes accordingly.
	playlist(int n, double t);

	setNumSongs(int n); // sets the number of songs.

	setTotalMinutes(double t); // sets the total time.

	Getters (accessors);

	int getNumSongs() const; // returns the number of songs.

	double getTotalMinutes() const; // returns the total play time.

	averageSongLength() const; // returns the average song length in minutes (totalMinutes_ / numSongs_). If numSongs_ is 0, return 0.

	Playlist operator+(const Playlist& other) const; //Returns a new Playlist whose numSongs_ and totalMinutes_ are the sum of the two operands.

	Playlist& operator+=(const Playlist& other) //Modifies the current playlist by adding in another playlist’s songs and time.
};


#endif //THE_FREAKING_EXAM_1_PLAYLIST_H