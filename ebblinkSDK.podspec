#
# Be sure to run `pod lib lint ebblinkSDKLibrary.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'ebblinkSDK'
  s.version          = '0.0.1'
  s.summary      = "ebblinkSDK let's your users share an image while preserving privacy"

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description  = "ebblinkSDK helps developers to implement a secure image sharing platform in their apps. "

  s.homepage     = "http://www.ebbl.ink"
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE.txt" }
  s.author             = { "Pau Ballart Godoy" => "pballart@gmail.com" }
  s.source       = { :git => "https://github.com/ebbapp/ebblinkSDK.git" }
  # s.source       = { :git => "https://github.com/ebbapp/ebblinkSDK.git", :tag => "#{s.version}" }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  #s.source_files = 'ebblinkSDK.framework'
  
  # s.resource_bundles = {
  #   'ebblinkSDKLibrary' => ['ebblinkSDKLibrary/Assets/*.png']
  # }

  s.ios.vendored_frameworks = 'ebblinkSDK.framework'
  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'ebblinkSDK', 'AFNetworking'
  # s.dependency "AFNetworking", "~> 3.0"
end
