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

	getNumSongs() const; // returns the number of songs.

	getTotalMinutes() const; // returns the total play time.

};


#endif //THE_FREAKING_EXAM_1_PLAYLIST_H