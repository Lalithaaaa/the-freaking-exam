//
// Created by lkant on 10/2/2025.
//

#include "Playlist.hpp"

Playlist::Playlist() {
//numSongs_ to 0 and totalMinutes_ to 0.0.
	numSongs_ = 0;
	totalMinutes_ = 0.0;
}

Playlist::Playlist(int n, double t) {
	numSongs_ = n;
	totalMinutes_ = t;
}

void Playlist::setNumSongs(int n) {
	numSongs_ = n;
}

void Playlist::setTotalMinutes(double t) {
	totalMinutes_ = t;
}

int Playlist::getNumSongs() const {
	return numSongs_;
}

double Playlist::getTotalMinutes() const {
	return totalMinutes_;
}

double Playlist::averageSongLength() const {
	// returns the average song length in minutes (totalMinutes_ / numSongs_). If numSongs_ is 0, return 0.
	if(numSongs_ == 0) {
		return 0;
	}

	return totalMinutes_ / numSongs_;
}

Playlist Playlist::operator+(const Playlist& other) const {
	Playlist play(numSongs_ + other.getNumSongs(), totalMinutes_ + other.getTotalMinutes());
	return play;
}


Playlist& Playlist::operator+=(const Playlist& other) {
	numSongs_ += other.getNumSongs();
	totalMinutes_ += other.getTotalMinutes();
	return *this;
}






