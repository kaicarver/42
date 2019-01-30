# a rediriger dans create.sh
egrep '^Dossier de rendu|^Fichiers à rendre|^(char|int|void) ' sujet.txt
# TODO: aussi remplacer /^(int|void) / par /^(int|void)\t/ 
# pour eviter l'erreur norminette "Space before function name"