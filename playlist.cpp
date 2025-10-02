//
// Created by lkant on 10/2/2025.
//

#include "playlist.hpp"

playlist::playlist() {
//numSongs_ to 0 and totalMinutes_ to 0.0.
	numSongs_ = 0;
	totalMinutes_ = 0.0;
}

playlist::playlist(int n, double t) {
	numSongs_ = n;
	totalMinutes_ = t;
}

playlist::playlist(int n, double t) {}

setNumSongs(int n) {
	numSongs_ = n;
}

playlist::setTotalMinutes(double t) {
	totalMinutes = t;
}

int playlist::getNumSongs() const {
	return numSongs_;
}

double playlist::getTotalMinutes() const {
	return totalMinutes_;
}

int playlist::averageSongLength() const {
	// returns the average song length in minutes (totalMinutes_ / numSongs_). If numSongs_ is 0, return 0.
	if(numSong_ == 0) {
		return 0;
	}

	return totalMinutes_ / numSongs_;
}

Playlist playlist::operator+(const Playlist& other) const {
	playlist play = new playlist(other.getNumSongs(), other.getTotalMinutes());
	return play;
}

Playlist& playlist::operator+=(const Playlist& other) {
	numSongs_ = other.getNumSongs();
	totalMinutes_ = other.getTotalMinutes();
}


