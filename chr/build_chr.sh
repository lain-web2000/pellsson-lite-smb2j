set -e
python genchr.py

cat smb/lost-sprites.chr smb/lost-back.chr smb/lost-victory.chr smb/lost-victory.chr lost-smborg-charset.chr \
    smb/lost-sprites.chr smb/lost-back.chr smb/lost-victory.chr smb/lost-victory.chr \
	intro/intro-bg.chr intro-sprbank0.chr > full.chr

