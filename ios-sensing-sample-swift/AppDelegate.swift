//
//  AppDelegate.swift
//  ios-sensing-sample-swift
//
//  Created by Varun Mishra on 10/18/22.
//

import UIKit

@main
class AppDelegate: UIResponder, UIApplicationDelegate {
    var mSensorManager: PSSensorManager?
    var mSettings: PSSensingSettings?


    func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
        // Override point for customization after application launch.
        self.mSettings = PSSensingSettings.sharedInstance()
        self.mSettings?.upload_DATA = false
        self.mSettings?.enable_HK_DUMP = false
        self.mSettings?.enable_LOCATION_UPDATES = true
        self.mSettings?.upload_URL = "https://europa.dartmouth.edu/mc-sensor-webapp-1.0.0-SNAPSHOT/sensordata/file"
        self.mSettings?.db_LIVE_DIR = "live_db";
        self.mSettings?.db_LIVE_FILENAME = "pheno.db";
        self.mSensorManager = PSSensorManager.sharedInstance();
        self.mSettings?.db_DISPATCH_QUEUE = "com.varunmishra.SensingTest.dbQueue";
        self.mSettings?.setUserID("test-user")
        self.mSensorManager?.getHKPermissions()
        self.mSensorManager?.startSensing()
        
        NotificationCenter.default.addObserver(
        self,
        selector: #selector(self.handleTimeEvent),
        name: NSNotification.Name(rawValue: "ACTION_TIME_TICK"),
        object: nil)
        
        return true
        
    }

    // MARK: UISceneSession Lifecycle

    func application(_ application: UIApplication, configurationForConnecting connectingSceneSession: UISceneSession, options: UIScene.ConnectionOptions) -> UISceneConfiguration {
        // Called when a new scene session is being created.
        // Use this method to select a configuration to create the new scene with.
        return UISceneConfiguration(name: "Default Configuration", sessionRole: connectingSceneSession.role)
    }

    func application(_ application: UIApplication, didDiscardSceneSessions sceneSessions: Set<UISceneSession>) {
        // Called when the user discards a scene session.
        // If any sessions were discarded while the application was not running, this will be called shortly after application:didFinishLaunchingWithOptions.
        // Use this method to release any resources that were specific to the discarded scenes, as they will not return.
    }

    
    @objc func handleTimeEvent(){
        print("heartbeat")
    }
}

