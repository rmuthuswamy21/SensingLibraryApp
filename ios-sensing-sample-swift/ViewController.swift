//
//  ViewController.swift
//  ios-sensing-sample-swift
//
//  Created by Varun Mishra on 10/18/22.
//

import UIKit

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view.
    }
    @IBAction func forceUpload(_ sender: Any) {
        let appDelegate = UIApplication.shared.delegate as! AppDelegate
        appDelegate.mSensorManager?.dumpDb(true)
        appDelegate.mSensorManager?.upload(true)
    }
    

}

