# observer_pattern
「増補改訂版Java言語で学ぶデザインパターン入門」のObserver Patternを参考にC++で実装し直したつもりのソリューションです。
動作確認はVisual Studio 2017で実施しています。

## what is the observer pattern?
観察対象の状態が変化したら観察者に対して観察対象から通知を行うデザインパターンの一種。  
オブジェクトの状態変化に応じた処理を記述する場合にとても役立つ。

## Characters in the observer pattern
- Subject(被験者)の役  
  Subject役は「観察される側」を表す。  
  Subject役は観察者であるObserver役を登録するメソッドと削除するメソッドを持つ。  
  そして、「現在の状態を取得する」メソッドも持っている。
  NumberGeneratorクラスが相当する。

- ConcreteSubject(具体的な被験者)の役  
  ConcreteSubject役は「観察される側」を表す。  
  状態が変化したら、登録されているObserver役に伝える。  
  RandomNumberGeneratorクラスが相当する。  
  ここでは、「notifyObservers」メソッドで状態が変化したという情報を発報している。

- Observer(観察者)の役  
  Observer役はSubject役から「状態が変化したぞ」と教えてもらう役。  
  状態が変化したことを通知するためのメソッドが「update」となる。  
  Observerクラスが相当する。

- ConcreteObserver(具体的な観察者)の役  
  ConcreteObserver役は具体的なObserver。  
  このプログラムでは、Observerは継承を行う前提で実装されている。  
  そのため、オーバーライド先の「update」メソッドによって取るべき挙動を異なるものにすることができている。  
  DigitObserverクラスとGraphObserverクラスが相当する。  
  DigitObserverでは数値を、GraphObserverでは「*」を出すプログラムとして異なる動きを実装している。  
  保持する情報を増やすことで様々な状態変化を行う仕組みを実装することも可能となる。すごい。

## The observer is a passive guy
「観察者」って言う割には自ら観察しているわけではないです。Observerは観察対象から「更新しました」と報告を受けてから動き出します。  
自分から動くことの出来ない受け身なやつです。Publish(発行)-Subscribe(購読)パターンとも呼ばれるらしい。  
Observerが購読、Subjectが発行でしょうか。個人的には報連相っぽさから部下と上司パターンにも見えます。  
世の中にはいっぱいObserverパターンで考えられることがありそうです。

## Output
![output](https://user-images.githubusercontent.com/12496951/134779793-fbee2d56-884c-4e70-a60a-2c0a2862c302.png)

## Dependency
- MSVC 15+

## Setup
1. git clone this repository.
2. open 'composite_pattern.sln'
3. Please Build & Run :)

## Authors
Yuji Iwanaga

