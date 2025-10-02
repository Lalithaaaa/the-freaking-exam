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