#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 6);
my ($x, $y, $density, $e, $o, $f) = @ARGV;
print "$y";
print "$e";
print "$o";
print "$f";
print "\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "$o";
		}
		else {
			print "$e";
		}
	}
	print "\n";
}
