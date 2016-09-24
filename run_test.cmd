echo test >> test.txt
SET /a _rand=%RANDOM%
git checkout -b _rand
git commit -m "test"
git push -u origin _rand