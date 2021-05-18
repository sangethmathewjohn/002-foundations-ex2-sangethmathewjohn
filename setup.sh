export LDLIBS="-lcs50" 
sudo dpkg --install ./libcs50_10.1.1_amd64.deb > /dev/null 2>&1
make patterns
make pythagorean
