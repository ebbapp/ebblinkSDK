Pod::Spec.new do |s|
  s.name             = 'ebblinkSDK'
  s.version          = '0.0.1'
  s.summary          = "ebblinkSDK let's your users share an image while preserving privacy"
  s.description  = "ebblinkSDK helps developers to implement a secure image sharing platform in their apps. "
  s.homepage     = "http://www.ebbl.ink"
  s.license      = { :type => "Apache License, Version 2.0", :file => "LICENSE.txt" }
  s.author             = { "Pau Ballart Godoy" => "pballart@gmail.com" }
  s.source       = { :git => "https://github.com/ebbapp/ebblinkSDK.git" }
  s.ios.deployment_target = '8.0'
  s.ios.vendored_frameworks = 'ebblinkSDK.framework'
end
