#TvRock-Log-Tweet#
TvRockのログファイル（tvrock.log2）を読み込んで、録画終了後のError, Signal, Drop, Scramblingの数値をツイートします。
ツイートには、TweetConsoleを使用するため、別途ダウンロード・セットアップが必要です。
<http://www.vector.co.jp/soft/win95/net/se483315.html>

##使い方##
1. logtweet.exeをtvrockフォルダ（実行ファイルのあるフォルダではなく、チャンネルデータやログデータのあるフォルダです）にコピーします。
2. TvRockの設定を開き、「プロセス」タブの中にあるコマンドに以下の記述をします
  `CE: "XXXX" %d YYYY`
  * XXXXには、logtweet.exeをフルパスで記入します。
  * YYYYには、twtcnsl.exeをフルパスで記入します。
3. 録画終了時に、ツイートが実行されれば完了です。

##お詫び##
自分が使えればいいやと思って作ったのでソースはガバガバです。  ろくにデバッグもしてないので環境によっては暴走して大変なことになるかもしれません。  
各自で直して使って下さい。  
普通のC言語です。
