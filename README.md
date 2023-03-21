<h1 align="center">Dark Server - A Flutter Chat Application</h1>

<p align="center">
    <a href="https://pub.dev/packages/stream_chat_flutter_core"><img src="https://img.shields.io/pub/v/stream_chat_flutter_core?include_prereleases" alt="Pub"></a>
    <a href="https://pub.dev/packages/flutter_lints"><img src="https://img.shields.io/badge/style-flutter__lints-blue" alt="style: flutter lints"></a>
    <a href="https://github.com/GetStream/flutter-samples"><img src="https://img.shields.io/badge/flutter-samples-teal.svg?longCache=true" alt="Flutter Samples"></a>
    <a href="https://opensource.org/licenses/Apache-2.0"><img alt="License" src="https://img.shields.io/badge/License-Apache%202.0-blue.svg"/></a>
    <a href="https://getstream.io/"><img src="https://img.shields.io/endpoint?url=https://gist.githubusercontent.com/HayesGordon/e7f3c4587859c17f3e593fd3ff5b13f4/raw/11d9d9385c9f34374ede25f6471dc743b977a914/badge.json" alt="Stream Feeds"></a>
</p>

<p align="center">  
DarkServer is a Android/IOS application made in <a href="https://flutter.dev/">Flutter</a> and the <a href="https://pub.dev/packages/stream_chat_flutter_core/">Dark Server Chat Flutter Core package</a>.
</br>

<p align="center">
<img src="https://user-images.githubusercontent.com/13705472/160611526-5caf7e95-4377-4798-881b-7a6c6e932c6b.gif" />
</p>

## Where To Start


The video tutorials provide a step-by-step guide to understand the code in this repository: [Dark Server](https://www.youtube.com/watch?v=vgqBc7jni8c&list=PLNBhvhkAJG6sH7dkmwt4BiCclFkMoXq4r)

## More Samples
Looking for more Flutter content? Take a look at our [samples repository](https://github.com/GetStream/flutter-samples) to see what you can create using Stream and Flutter.

## Installation Instructions

```bash
git clone https://github.com/HayesGordon/chatter.git
```

Check out the required branch

```bash
git checkout {branch-name}
```

Install dependencies
```bash
flutter pub get
```

Generate the needed platform folders (Android, iOS). Some of the branches may have these already included.

```bash
flutter create .
```

## Further Setup

Add your Stream app's key in `lib/app.dart`.

In the [third tutorial](https://github.com/HayesGordon/chatter/tree/tutorial-003-firebase-authentication) the application requires Firebase Authentication and Cloud Functions to be setup. From the [fourth tutorial](https://github.com/HayesGordon/chatter/tree/tutorial-004-version-four-and-firebase-extensions) this is even easier with [Stream's Firebase Extensions](https://getstream.io/blog/stream-firebase-extensions/), see the [video](https://youtu.be/Dt_taxX98sg) for more information.


