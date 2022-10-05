package com.exampleble.fragment

import android.content.pm.ActivityInfo
import android.os.Bundle
import androidx.fragment.app.Fragment
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import com.exampleble.R
import kotlinx.android.synthetic.main.fragment_dashboard.view.*


class Dashboard : Fragment() {

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?,
        savedInstanceState: Bundle?
    ): View? {
        // Inflate the layout for this fragment and set listSize if > 1
        val view = inflater.inflate(R.layout.fragment_dashboard, container, false)
        return view
    }


}