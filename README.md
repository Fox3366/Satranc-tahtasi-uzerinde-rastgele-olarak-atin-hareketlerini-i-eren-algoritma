# Satranc-tahtasi-uzerinde-rastgele-olarak-at-n-hareketlerini-i-eren-algoritma
Yazılım müh. 1.sınıf 1.dönem matrisler konusu ödevim

Başlangıç olarak kullanıcıdan değer alarak NxN lik bir matris oluşturulur.

Matrisin içi %20-%40 arasında bir değer olacak şekilde rastgele olarak 0 lar ile doldurulur, kalan yerlere 1 yerleştirilir.

At sadece 1 olan noktalara hareket edebilir.

Matrisin [0][0] noktasından başlar ve [N-1][N-1] noktasına rastgele hareket ederek ulaşmayı hedeflemektedir. 

At hareket ettiği noktalara o anki mevcut hareket sayısını yazmaktadır ve bir kez uğradığı yere tekrar uğrayamaz.

Hareketleri tamamen rastgele olarak gerçekleşmektedir ve de hareket edeceği nokta kalmadığında her şey sıfırlanır ve oyun tekrardan başlar ta ki çıkışa ulaşana kadar.

Oyun sonunda kaç adet denemede çıkışı bulduğunu ve de denemelerdeki matrisleri tek tek gösterir.

Proje matris konusunda algoritmayı geliştirmeyi amaçlamaktadır.

English:
"Knight's Random Movement on a Chessboard" Algorithm

This is a project for the first semester of the first year in Software Engineering, focusing on matrices.

Initially, a NxN matrix is created by taking input from the user. The matrix is filled with random values between 0 and 1, where 20%-40% of the cells will contain 0, and the remaining cells will contain 1. The knight can only move on the cells containing 1.

The knight starts at the [0][0] position of the matrix and aims to reach the [N-1][N-1] position by making random moves. The knight writes the current number of moves at each step and cannot revisit a previously visited cell.

The moves occur completely randomly, and if there are no valid moves left, everything resets, and the game restarts until the exit is reached.

At the end of the game, the number of attempts to find the exit and the matrices from each attempt are displayed.

The project aims to improve the algorithm related to matrices.
